## **Introduction**
This repository maintains my solutions on AtCoder :sunglasses:

## **Setup**

- ### Docker
    - Build the image
        ```bash
        docker-compose up -d
        ```

- ### AtCoder CLI
    - Login
        ```bash
        acc login
        oj login https://beta.atcoder.jp/
        ```

    - #### Confirm contest information
        ```bash
        acc contest {contest_id}
        ```

    - #### Create a new directory for the contest
        ```bash
        acc new {contest_id}
        ```

    - #### Create a new directory for the problem
        ```bash
        acc add
        ```

    - #### Set up the template
        ```bash
        cd `acc config-dir`
        mkdir py
        nano template.json
        ```

        - ##### template.json
            ```json
            {
                "task":{
                    "program": ["main.py"],
                    "submit": "main.py"
                }
            }
            ```
        - ##### Execute the following command to set up the template
            ```bash
            acc add --template py
            acc config default-template py
            ```

    - #### Test the code
        ```bash
        oj t -c " ./main" -d ./test/
        ```

    - #### Submit the code
        ```bash
        acc s
        ```
