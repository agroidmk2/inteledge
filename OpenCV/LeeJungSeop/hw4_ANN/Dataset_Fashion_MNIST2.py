e# handwriten digit
import tensorflow as tf
import matplotlib.pyplot as plt
import numpy as np

mnist = tf.keras.datasets.fashion_mnist

(image_train, label_train), (image_test, label_test) = mnist.load_data()
print("Train Image shape : ", image_train.shape)
print("Train Labe :", label_train, "\n")
print(image_train[0])

num = 20
for idx in range (num):
    sp = plt.subplot(5,5,idx+1)
    plt.imshow(image_train[idx])
    plt.title(f'Label: {label_train[idx]}')
plt.show()

model = tf.keras.Sequential()
model.add(tf.keras.Input(shape=(28,28)))
model.add(tf.keras.layers.Flatten())
model.add(tf.keras.layers.Dense(128, activation='sigmoid'))
model.add(tf.keras.layers.Dense(64, activation='sigmoid'))
model.add(tf.keras.layers.Dense(10, activation='softmax'))

model.compile(optimizer = 'adam', loss = 'sparse_categorical_crossentropy', metrics=['accuracy'])
model.summary()
model.fit(image_train, label_train, epochs = 10, batch_size=5)
num = 5
predic = model.predict(image_train[0:num])
print(predic)

print("*prediction, ", np.argmax(predic, axis = 1))
plt.figure(figsize = (15,15))
for idx in range(num):
    sp = plt.subplot(1,5,idx+1)
    plt.imshow(image_test[idx])
plt.show()