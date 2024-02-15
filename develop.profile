[settings]
os=Linux
arch=x86_64
compiler=clang
compiler.version=16
compiler.cppstd=20
compiler.libcxx='libstdc++11'
build_type=Release

[tool_requires]
cmake/3.25.2

[conf]
tools.build:compiler_executables={"cpp": "clang++-16", "c": "clang-16", "rc": "clang-16"}

