# 현재 디렉토리에 있는 모든 파일을 SRC_FILES 변수에 추가한다.
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cc
)

add_library(shape STATIC ${SRC_FILES})

# shape 의 include 경로 지정
target_include_directories(shape PUBLIC ${CMAKE_SOURCE_DIR}/include)

# shape 의 컴파일 옵션 지정
target_compile_options(shape PRIVATE -Wall -Werror)

# shape 를 C++ 17 로 컴파일
target_compile_features(shape PRIVATE cxx_std_17)

# FetchContent 를 사용하기 위해 include.
include(FetchContent)

# fmt 라이브러리를 불러온다.
FetchContent_Declare(
  Fmt
  GIT_REPOSITORY "https://github.com/fmtlib/fmt"
  GIT_TAG "7.1.3"
  )
FetchContent_MakeAvailable(Fmt)

# shape 에 링크
target_link_libraries(shape PRIVATE fmt)

