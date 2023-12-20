# Function to add alias if it doesn't exist
add_alias() {
    if ! grep -q "alias $1=" ~/.bashrc; then
        echo "alias $1=\"$2\"" >> ~/.bashrc
    fi
}

# Change mode and register in alias for simple script
chmod 777 ./run.sh
add_alias run ./run.sh
add_alias norm "norminette *.c *.h"
add_alias cls clear
add_alias init ./init.sh

# Install Norminette
python3 -m pip install --upgrade pip setuptools
python3 -m pip install norminette

# Create Makefile
cmake .

# Shell script is running on subshell
# For uisng alias in comportable, just run bash
bash
