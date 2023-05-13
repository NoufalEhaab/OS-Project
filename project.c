#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

// List all running processes
void list_processes()
{
    system("ps aux");
}

// Show process details
void show_process_details()
{
    int pid;
    printf("Enter process ID: ");
    scanf("%d", &pid);
    char command[256];
    snprintf(command, sizeof(command), "ps -p %d -o pid,ppid,cmd,%cpu,%mem", pid);
    system(command);
}

// Kill a process
void kill_process()
{
    int pid;
    printf("Enter process ID: ");
    scanf("%d", &pid);
    kill(pid, SIGTERM);
}

// Main menu
void print_menu()
{
    printf("\n");
    printf("1. List all running processes\n");
    printf("2. Show process details\n");
    printf("3. Kill a process\n");
    printf("4. List all open files for a process\n");
    printf("5. List all open network connections\n");
    printf("6. Monitor CPU usage in real-time\n");
    printf("7. Show memory usage details\n");
    printf("8. Show disk usage details\n");
    printf("9. Show the number of running processes for each user\n");
    printf("10. Kill all processes that have been running for more than a certain time\n");
    printf("11. Show the process hierarchy of a specific process\n");
    printf("12. List all processes that have a certain string in their command line\n");
    printf("13. Exit\n");
    printf("\n");
}

int main()
{
    int choice;
    while (1)
    {
        print_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            list_processes();
            break;
        case 2:
            show_process_details();
            break;
        case 3:
            kill_process();
            break;
        case 4:
            list_open_files();
            break;
        case 5:
            list_network_connections();
            break;
        case 6:
            monitor_cpu_usage();
            break;
        case 7:
            show_memory_usage();
            break;
        case 8:
            show_disk_usage();
            break;
        case 9:
            show_running_processes_per_user();
            break;
        case 10:
            kill_processes_by_time();
            break;
        case 11:
            show_process_hierarchy();
            break;
        case 12:
            list_processes_by_string();
            break;
        case 13:
            exit(EXIT_SUCCESS);
        default:
            printf("Invalid choice. Try again.\n");
            break;
        }
    }
    return 0;
}
