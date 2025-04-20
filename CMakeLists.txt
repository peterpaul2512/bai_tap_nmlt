cmake_minimum_required(VERSION 3.10)

# Tên dự án
project(luyen_tap_c++ LANGUAGES CXX)

# Thiết lập chuẩn C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# In đường dẫn nguồn để debug
message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")

# Tìm tất cả các file .cpp trong các thư mục cụ thể
file(GLOB SOURCE_FILES CONFIGURE_DEPENDS
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_luyen_tap/bai_1_den_20/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_luyen_tap/bai_21_den_40/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_luyen_tap/bai_41_den_60/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_luyen_tap/bai_61_den_80/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_luyen_tap/bai_81_den_100/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_luyen_tap/bai_101_den_120/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_tap_chuoi_ky_tu/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_tap_mang_1_chieu/bai_120_den_140/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_tap_mang_1_chieu/bai_141_den_160/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_tap_mang_1_chieu/bai_161_den_180/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_tap_mang_1_chieu/bai_181_den_200/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_tap_mang_1_chieu/bai_201_den_220/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_tap_mang_1_chieu/bai_221_den_240/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_tap_mang_1_chieu/bai_241_den_260/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_tap_mang_2_chieu/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_tap_mang_2_chieu/ma_tran_thuong/ky_thuat_dat_co_hieu_348_365/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_tap_mang_2_chieu/ma_tran_thuong/ky_thuat_tinh_toan_320_347/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_tap_mang_2_chieu/ma_tran_thuong/ky_thuat_xu_ly_ma_tran_392_406/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/bai_tap_mang_2_chieu/ma_tran_thuong/ma_tran_311_323/*.cpp"
        "${CMAKE_SOURCE_DIR}/bai_tap/test_project/*.cpp"
)

# Kiểm tra xem có file nào được tìm thấy không
if(NOT SOURCE_FILES)
    message(WARNING "No .cpp files found in specified directories")
else()
    message(STATUS "Found source files: ${SOURCE_FILES}")
endif()

# Tạo một executable cho mỗi file .cpp
foreach(SOURCE_FILE ${SOURCE_FILES})
    # Lấy tên file không có đường dẫn và phần mở rộng
    get_filename_component(EXECUTABLE_NAME ${SOURCE_FILE} NAME_WE)

    # Kiểm tra xem target đã tồn tại chưa
    if(TARGET ${EXECUTABLE_NAME})
#        message(WARNING "Target ${EXECUTABLE_NAME} already exists for ${SOURCE_FILE}. Skipping duplicate.")
        continue()
    endif()

    # Tạo executable từ file .cpp
    # Tạo executable từ file .cpp
    add_executable(${EXECUTABLE_NAME} ${SOURCE_FILE})
endforeach()

# In số lượng file tìm thấy
list(LENGTH SOURCE_FILES FILE_COUNT)
message(STATUS "Total source files found: ${FILE_COUNT}")