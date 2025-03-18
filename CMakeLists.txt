cmake_minimum_required(VERSION 3.10)
project(luyen_tap_c__)

set(CMAKE_CXX_STANDARD 20)

# Đặt tất cả file thực thi (.exe) vào thư mục bin/
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Đảm bảo thư mục bin/ tồn tại
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Tìm tất cả file .cpp trong thư mục bai_tap/
file(GLOB_RECURSE SOURCE_FILES "bai_tap/**/*.cpp")

# Duyệt từng file .cpp và tạo file .exe trong bin/
foreach(SOURCE_FILE ${SOURCE_FILES})
    get_filename_component(EXE_NAME ${SOURCE_FILE} NAME_WE)
    add_executable(${EXE_NAME} ${SOURCE_FILE})

    # Đặt file .exe vào thư mục bin/
    set_target_properties(${EXE_NAME} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
    )

    # Đặt thư mục làm việc (Working Directory) cho mỗi target
    set_target_properties(${EXE_NAME} PROPERTIES
        VS_DEBUGGER_WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
    )
endforeach()
