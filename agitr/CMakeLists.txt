# What v e r s i o n o f CMake i s needed ?

cmake_minimum_required (VERSION 2.8.3 )

# Name o f t h i s package .

project(agitr)

# Find t h e c a t k i n b u i l d system , and any o t h e r p a c k a g e s on
# which we depend .

find_package(catkin REQUIRED COMPONENTS roscpp geometry_msgs)

# D e c l a r e our c a t k i n package .

catkin_package()

# S p e c i f y l o c a t i o n s of header f i l e s .

include_directories(include ${catkin_INCLUDE_DIRS})

# D e c l a r e t h e e x e c u t a b l e , a l o n g with i t s s o u r c e f i l e s .If
# there are m u l t i p l e executables , use m u l t i p l e c o p i e s o f
# this line .



# S p e c i f y l i b r a r i e s a g a i n s t which t o l i n k . Again , t h i s
# l i n e s h o u l d be c o p i e d f o r each d i s t i n c t e x e c u t a b l e i n
# t h e package .

add_executable(hello hello.cpp)
add_executable(pub pubvel.cpp)
add_executable(subpose subpose.cpp)
add_executable(count count.cpp)
add_executable(reverse_cmd_vel reverse_cmd_vel.cpp)


target_link_libraries(hello ${catkin_LIBRARIES})
target_link_libraries(pub ${catkin_LIBRARIES})
target_link_libraries(subpose ${catkin_LIBRARIES})
target_link_libraries(count ${catkin_LIBRARIES})
target_link_libraries(reverse_cmd_vel ${catkin_LIBRARIES})