from scipy.sparse.linalg import aslinearoperator
import numpy as np


# ファイルから行列とベクトルを読み込む関数
def read_from_file(filename):
    with open(filename, "r") as f:
        # 行列のサイズを読み取る
        rows, cols = map(int, f.readline().split())
        A = np.zeros((rows, cols))

        # 行列Aを読み取る
        for i in range(rows):
            A[i] = list(map(float, f.readline().split()))

        # ベクトルBを読み取る
        b_size = int(f.readline().strip())
        B = np.array(list(map(float, f.readline().split())))

    return A, B


# ファイルからデータを読み込む
A, B = read_from_file("matrix_data.txt")

# 初期解をゼロベクトルに設定
x0 = np.zeros_like(B)


# ヤコビ法用の行列関数を作成
def jacobi_iteration(x):
    n = len(x)
    x_new = np.zeros_like(x)
    for i in range(n):
        sigma = sum(A[i, j] * x[j] for j in range(n) if j != i)
        x_new[i] = (B[i] - sigma) / A[i, i]
    return x_new


# ラムダ関数を用いた線形演算オペレーター
op = aslinearoperator(A)
x = x0
for _ in range(100):  # 最大100回繰り返す
    x_new = jacobi_iteration(x)
    if np.linalg.norm(x_new - x) < 1e-6:  # 許容誤差
        print("収束しました")
        break
    x = x_new

print("解:", x)
