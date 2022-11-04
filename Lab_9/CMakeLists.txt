cmake_minimum_required(VERSION 3.20)
project(Lab_9 C)

set(CMAKE_C_STANDARD 99)

add_executable(Lab_9 lsh-master/src/main.c processes/Exec/env.c processes/Exec/exec_error.c processes/Exec/execl.c
        processes/Exec/execle.c processes/Exec/execlp.c processes/Exec/execv.c processes/Exec/execve.c
        processes/Exec/execvp.c processes/Exec/getenv.c processes/Exec/system_use.c processes/GettingStarted/getpid.c
        processes/LetsFork/fork1.c processes/LetsFork/fork2.c processes/LetsFork/fork_ex.c processes/Misc/whileLoop.c
        processes/Shell/arguArray.c processes/Shell/chdir.c processes/Shell/getcwd.c processes/Shell/setenv.c
        processes/Signals/custom.c processes/Signals/custom.c processes/Signals/kill.c processes/Signals/sigign.c
        processes/Wait/problematic processes/Wait/problematic2.c processes/Wait/sleep.c processes/Wait/wait.c processes/Wait/waitpid.c)