

conan install -pr develop.profile -of conan-build .

. conan-build/conanbuild.sh 

cmake -S . -B cmake-build  --toolchain=conan-build/conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release 

cmake --build cmake-build
