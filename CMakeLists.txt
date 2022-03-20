# устанавливаем минимальную версию cmake
cmake_minimum_required(VERSION 3.16.3 FATAL_ERROR)

#set src variables
set(PROJECT_NAME app)
set(SOURCE_FILES src/main.cpp)

# устанавливаем название проекта
project(${PROJECT_NAME})

# прописываем путь к хедерам
include_directories(${PROJECT_SOURCE_DIR}/include)

#-lGLEW -lglfw3 -lpthread -lm -lz -lGL -lX11 -lXfixes -ldl
#target_link_libraries(-lX11)


# устанавливаем название исполнительного файла
# и прописываем пути к каждому исходнику
add_executable(
    ${PROJECT_NAME} 
    ${SOURCE_FILES}   
)

#GLAD
# add_subdirectory(external/glad)

# прописываем пути к библиотекам
# GLFW
# find_package(glfw3 REQUIRED)
# target_link_libraries(${PROJECT_NAME} PRIVATE glad GL glfw)


#target_link_libraries(${PROJECT_NAME} PRIVATE glad)


