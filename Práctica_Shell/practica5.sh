# Crear el archivo secreto.txt con un mensaje
echo "Mensaje confidencial" > secreto.txt

# Cambiar los permisos para que solo el propietario pueda leer y escribir
chmod 600 secreto.txt

# Intentar abrir el archivo con otro usuario (esto lo harías desde otro terminal o sesión de usuario)
echo "Intentando abrir el archivo como otro usuario"

# Cambiar los permisos para que todos los usuarios puedan leer, pero solo el propietario pueda escribir
chmod 644 secreto.txt

# Mostrar los permisos finales
ls -l secreto.txt

