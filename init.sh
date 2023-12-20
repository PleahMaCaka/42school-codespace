# Change mode and register in alias for simple script
chmod 777 ./run.sh
alias run=./run.sh

alias norm="norminette *.c *.h"
alias cls=clear

# Install Norminette
python3 -m pip install --upgrade pip setuptools
python3 -m pip install norminette

# Create Makefile
cmake .
