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
         docker-compose exec dev bash
         ```

- ### AtCoder CLI関連
    - ログイン
        ```
        acc login
        oj login https://beta.atcoder.jp/
        ```

    - コンテスト情報の確認
        ```
        acc contest [コンテスト名]
        ```

    - コンテスト用ディレクトリの作成
        ```
        acc new [コンテスト名]
        ```

    - 問題用ディレクトリの追加
        ```
        acc add
        ```

    - 解答テスト
        ```
        oj t
        ```

    - 問題提出
        ```
        acc s
        ```
