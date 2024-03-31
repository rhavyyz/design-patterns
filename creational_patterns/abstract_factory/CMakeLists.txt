cmake_minimum_required(VERSION 3.12)

project(Abstract_Factory)


set(fac_folder ${PROJECT_SOURCE_DIR}/Factories/include)
set(windows_fac_folder ${PROJECT_SOURCE_DIR}/Factories/include/Windows)
set(mac_fac_folder ${PROJECT_SOURCE_DIR}/Factories/include/Mac)
set(ui_folder ${PROJECT_SOURCE_DIR}/UiComponents/include)
set(windows_ui_folder ${PROJECT_SOURCE_DIR}/UiComponents/include/Windows)
set(mac_ui_folder ${PROJECT_SOURCE_DIR}/UiComponents/include/Mac)

set(includes
    ${fac_folder}
    ${windows_fac_folder}
    ${mac_fac_folder}
    ${ui_folder} 
    ${windows_ui_folder} 
    ${mac_ui_folder} 
)

file(GLOB_RECURSE fac_source ${PROJECT_SOURCE_DIR}/Factories/src/*.cpp)
file(GLOB_RECURSE ui_source ${PROJECT_SOURCE_DIR}/UiComponents/src/*.cpp)

add_executable(${PROJECT_NAME} main.cpp 
    ${fac_source}
    ${ui_source}
    )

set_property (TARGET ${PROJECT_NAME}
  PROPERTY
    CXX_STANDARD 20
)

# target_sources(${PROJECT_NAME} PUBLIC ${sources})
target_include_directories(${PROJECT_NAME} PUBLIC ${includes})
# target_include_directories(${PROJECT_NAME} PUBLIC ${sources})
