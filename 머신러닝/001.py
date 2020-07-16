# hypothesis H(x) = Wx + b
# Cost cost(W, b) = 에러 제곱을 모두 더한 후 평균값으로 나눈 것 

import tensorflow as tf
tf.enable_eager_execution()

# 데이터 준비
x_data = [1, 2, 3, 4, 5]
y_data = [1, 2, 3, 4, 5]

# 임의의 갑
W = tf.Variable(2.9) # 기울기
b = tf.Variable(0.5) # y 절편

# tf.reduce_mean 랭크가 줄어들며 mean을 구함
# tf.square(3) -> 제곱

learning_rate = 0.01

for i in range(100):
    with tf.GradientTape() as tape:
        hypothesis = W * x_data + b
        cost = tf.reduce_mean(tf.square(hypothesis - y_data))
    W_grad, b_grad = tape.gradient(cost, [W, b])
    W.assing_sub(learning_rate * W_grad)
    b.assing_sub(learning_rate * b_grad)

    if i % 10 == 0:
        print()

