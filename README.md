## **概要**
S00000のAtCoder管理用リポジトリ

## **備忘録がてら使い方**

- ### Docker関連
    - コンテナの作成(初回)
        ```
        docker-compose up -d
        ```

    - コンテナの起動と停止(2回目以降)
        ```
        # 起動
        docker start atcoder_dev_1

        # 停止
        docker stop atcoder_dev_1
        ```

    - ターミナル上でコンテナに入る
         ```
         docker-compose exec app bash
         ```

