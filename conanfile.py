from conans.model.conan_file import ConanFile
from conan.tools import CppInfo
import os
import json

class MyConan(ConanFile):
    name = "yandex-book"  # Замените на имя вашего проекта
    version = "1.0"  # Замените на версию вашего проекта
    settings = "os", "compiler", "build_type", "arch"
    requires = "gtest/1.14.0"
    generators = "CMakeDeps", "CMakeToolchain"

    def generate(self):

        aggregated_cpp_info = CppInfo(self)
        deps = self.dependencies.host.topological_sort
        deps = [dep for dep in reversed(deps.values())]
        for dep in deps:
            # We don't want independent components management, so we collapse
            # the "dep" components into one CppInfo called "dep_cppinfo"
            dep_cppinfo = dep.cpp_info.aggregated_components()
            # Then we merge and aggregate this dependency "dep" into the final result
            aggregated_cpp_info.merge(dep_cppinfo)
        print("Include paths:")
        print(aggregated_cpp_info.includedirs)  # All include dirs from all deps, all components
        # aggregated_cpp_info.libs  # All library names from all deps, all components
        # aggregated_cpp_info.system_libs # All system-libs from all deps

        filePath = os.path.join(self.source_folder,'.vscode/c_cpp_properties.json')
        with open(filePath, 'r') as f:
            data = json.load(f)
        data['configurations'][0]['includePath'] = ["${workspaceFolder}/**",*aggregated_cpp_info.includedirs ]
        with open(filePath, 'w') as f:
            json.dump(data, f, indent=4)
        
        pass
    