# Project Report

## Introduction
This C code provides a menu-driven program that allows the user to perform various process and system-related tasks. It utilizes several system calls and commands to retrieve and manipulate process information, monitor system resources, and perform process management operations. The program displays a menu with different options, and the user can choose an option to perform the corresponding task.

## Code Structure
The code consists of several functions, each responsible for a specific task. Here's an overview of the functions:

1. `list_open_files()`: Lists all open files for a specified process.
2. `list_network_connections()`: Lists all open network connections and their corresponding processes.
3. `monitor_cpu_usage()`: Monitors CPU usage in real-time using the `top` command.
4. `list_processes()`: Lists all running processes using the `ps` command.
5. `show_process_details()`: Shows details of a specific process specified by the user.
6. `kill_process()`: Kills a specific process specified by the user using the `kill` system call.
7. `kill_processes_by_time()`: Kills all processes that have been running for more than a certain time threshold using the `ps`, `awk`, and `xargs` commands.
8. `show_process_hierarchy()`: Shows the process hierarchy of a specific process using the `pstree` command.
9. `list_processes_by_string()`: Lists all processes that have a certain string in their command line using the `ps` and `grep` commands.
10. `show_memory_usage()`: Shows memory usage details using the `free` command.
11. `show_disk_usage()`: Shows disk usage details using the `df` command.
12. `show_running_processes_per_user()`: Shows the number of running processes for each user using the `ps`, `sort`, and `uniq` commands.
13. `print_menu()`: Displays the main menu options to the user.
14. `main()`: The entry point of the program where the menu loop resides.

The program uses various C standard library headers, such as `stdio.h`, `stdlib.h`, `string.h`, `unistd.h`, `signal.h`, `sys/types.h`, and `sys/wait.h`, to include the necessary functions and definitions.

## Menu Options
The program provides the following menu options:

1. **List all running processes**: Displays a list of all running processes using the `ps` command.
2. **Show process details**: Shows detailed information about a specific process specified by the user.
3. **Kill a process**: Terminates a specific process specified by the user using the `kill` system call.
4. **List all open files for a process**: Lists all open files for a specified process using the `ls` command.
5. **List all open network connections**: Lists all open network connections and their corresponding processes using the `netstat` command.
6. **Monitor CPU usage in real-time**: Displays real-time CPU usage using the `top` command.
7. **Show memory usage details**: Shows information about memory usage using the `free` command.
8. **Show disk usage details**: Displays information about disk usage using the `df` command.
9. **Show the number of running processes for each user**: Shows the number of running processes for each user using the `ps`, `sort`, and `uniq` commands.
10. **Kill all processes that have been running for more than a certain time**: Terminates all processes that have been running for more than a specified time threshold using the `ps`, `awk`, and `xargs` commands.
11. **Show the process hierarchy of a specific process specified by the user**: Displays the process hierarchy of a specific process specified by the user using the `pstree` command.
12. **List all processes that have a certain string in their command line**: Lists all processes that have a specified string in their command line using the `ps` and `grep` commands.
13. **Exit**: Terminates the program.

## Usage
To use the program, follow these steps:

1. Compile the code using a C compiler such as GCC.
2. Run the compiled executable.
3. The program will display a menu with numbered options.
4. Enter the number corresponding to the desired task.
5. Follow the prompts and provide any necessary input.
6. The program will execute the chosen task and display the results.
7. After completing a task, the menu will be displayed again for further selection.
8. To exit the program, choose option 13 from the menu.

## Conclusion

This C code provides a versatile program for managing and monitoring processes and system resources. With its menu-driven interface, users can easily perform various tasks such as listing running processes, examining process details, terminating processes, monitoring CPU usage, viewing memory and disk usage details, and more. By utilizing system calls and commands, the code interacts with the underlying operating system to retrieve process information and execute system operations. The program's modular structure and menu-driven approach make it user-friendly and adaptable for different system administration and monitoring tasks.

## Screenshots

| | | |
|:-------------------------:|:-------------------------:|:-------------------------:|
| <img class="img-fluid" width="1604" src="Screenshots/Screenshot%20from%202023-05-17%2017-48-29.png">  | <img class="img-fluid" width="1604" src="Screenshots/Screenshot%20from%202023-05-17%2017-48-48.png"> | <img class="img-fluid" width="1604" src="Screenshots\Screenshot from 2023-05-17 17-50-28.png"> | 
<img class="img-fluid" width="1604" src="Screenshots\Screenshot from 2023-05-17 17-51-06.png"> | <img class="img-fluid" width="1604" src="Screenshots\Screenshot from 2023-05-17 17-51-11.png"> | <img class="img-fluid" width="1604" src="Screenshots\Screenshot from 2023-05-17 17-51-28.png"> |
<img class="img-fluid" width="1604" src="Screenshots\Screenshot from 2023-05-17 17-51-50.png"> | <img class="img-fluid" width="1604" src="Screenshots\Screenshot from 2023-05-17 17-52-02.png"> | <img class="img-fluid" width="1604" src="Screenshots\Screenshot from 2023-05-17 17-52-19.png"> |
<img class="img-fluid" width="1604" src="Screenshots\Screenshot from 2023-05-17 17-53-37.png"> | <img class="img-fluid" width="1604" src="Screenshots\Screenshot from 2023-05-17 17-55-17.png"> |
