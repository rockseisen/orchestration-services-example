# Example of an avionic orchestration software resulting from my masters thesis 

Hi! In this project i am working on an example implementation for a orchestration software which is inteded for use in avionics.
The overall system architecture is inspired by and held to be as close to the modern microservice architecture as possible!
If you have some time, interest and want to give some feedback feel free to clone/fork this repo and test some stuff!


## Architecture modeling

### Component model

The following is a model of the component architecture of the current services.
It describes the interactions between the services and the orchestration software.



## Build

```bash
./build.sh --clean
```

Run tests:
```bash
./run_tests.sh
```

## Run application

```bash
./build/application/bank-system
```

## Project structure

Under construction

<!-- Each module has it's own CMakeLists.txt. There are examples of different build targets:

- `account` module is built as a static library
- `application` module is built as an executable
- `test` module is built as an executable (main function is generated by `Catch2` testing library) 
-->