# Starting Point for Docs

Putting down the shell commands that I use so that I don't have to recreate them
from scratch later.

## Unit Tests in Docker

```bash
# Build or pull docker image
$ cp test.env.example test.env
$ ENV_FILE=test.env ./docker_run.sh cpputest
```

```bash
container $ cmake ../led_on/ -DCOMPILE_UNIT_TESTS=ON
container $ make
container $ ./bin/test_led_on
```
