

conan install -pr develop.profile -of conan-build .

. conan-build/conanbuild.sh 

cmake -S . -B cmake-build  --toolchain=conan-build/conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release 
cmake -S . -B cmake-build  --toolchain=conan-build/conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release --fresh


cmake --build cmake-build
cmake --build cmake-build && ctest --test-dir cmake-build
cmake --build cmake-build --parallel 24 && ctest --test-dir cmake-build
