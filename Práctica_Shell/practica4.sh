# Crear el archivo script.sh
touch script.sh

# Escribir en script.sh
echo "#!/bin/bash" > script.sh
echo "echo \"Este es un script de prueba\"" >> script.sh

# Mostrar los permisos actuales de script.sh
ls -l script.sh

# Cambiar los permisos para solo lectura y ejecución para el propietario
chmod 500 script.sh

# Intentar modificar el archivo (en este punto debería fallar)
nano script.sh  # O usa vim si prefieres

# Volver a darle permisos de escritura
chmod 700 script.sh
