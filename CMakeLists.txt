cmake_minimum_required(VERSION 3.10)
project(Morpion)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Inclure le dossier des en-têtes de SFML
include_directories("C:/msys64/mingw64/include")

# Ajouter les fichiers sources
include_directories(include)
file(GLOB_RECURSE SOURCES "src/*.cpp" "main.cpp")

# Créer l'exécutable
add_executable(morpion ${SOURCES})

# Définir le chemin vers les bibliothèques SFML (si nécessaire)
set(SFML_DIR "C:/msys64/mingw64/lib/cmake/SFML")

# Rechercher SFML et ajouter les composants nécessaires
find_package(SFML 2.5 COMPONENTS system window graphics audio REQUIRED)
target_link_libraries(morpion sfml-system sfml-window sfml-graphics sfml-audio)
