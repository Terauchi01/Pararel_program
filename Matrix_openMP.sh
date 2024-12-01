#!/bin/bash

# 対象のファイル
files=("Matrix_OpenMP.cpp" "Matrix_2.cpp" "Matrix.cpp")

# コンパイルオプション
optimizations=("-O2" "-O0")

# コマンドライン引数 (例: 1000, 2000)
input_sizes=(10000,20000,30000,40000,50000)

# 基準ファイル名（最初のプログラムと最適化レベルを基準にする）
base_file=""

# コンパイルと実行
for file in "${files[@]}"; do
    for opt in "${optimizations[@]}"; do
        # 出力バイナリ名
        base_name=$(basename "$file" .cpp)
        binary_name="${base_name}_${opt#-}.out"
        log_name="${base_name}_${opt#-}.log"

        # コンパイル
        if [[ "$file" == *"OpenMP"* ]]; then
            g++ "$file" -fopenmp -std=c++20 $opt -o "$binary_name"
        else
            g++ "$file" -std=c++20 $opt -o "$binary_name"
        fi

        # 実行と結果ファイルの生成
        for size in "${input_sizes[@]}"; do
            output_file="results/${binary_name}_${size}.txt"
            echo "Running $binary_name with size $size"
            echo "./${binary_name} ${size} ${log_name}"
            ./"$binary_name" $size $log_name
        done
    done
done
# files_to_compare=("Matrix_OpenMP_log"/*)

# # 最初のファイルを基準ファイルに設定
# base_file="${files_to_compare[0]}"
# echo "Base file for comparison: $base_file"

# # 比較処理
# for file in "${files_to_compare[@]}"; do
#     if [[ "$file" != "$base_file" ]]; then
#         diff_output=$(diff "$base_file" "$file")
#         if [[ -z "$diff_output" ]]; then
#             echo "PASS: $file matches the base file."
#         else
#             echo "FAIL: $file differs from the base file."
#             echo "Differences:"
#             echo "$diff_output"
#         fi
#     fi
# done

# echo "Results are saved in the 'results' directory."
