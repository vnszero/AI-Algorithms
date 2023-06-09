// Iris-setosa = (001)
// Iris-versicolor = 010 
// Iris-virginica = 100

// a base de dados 150 plantas sendo:
// 	|_ 50 Iris-setosa 
// 	|_ 50 Iris-versicolor 
// 	|_ 50 Iris-virginica 

// a => taxa de aprendizagem
// a = 0.1 

// dn é o valor desejado para o neurônio n
// 	dn = tabelado
// zn é o erro observado para a diferença do valor desejado para o encontrado naquele neurônio n
// 	zn = dn - yn
// E é o erro quadrático da época, deve ser plotado
// bn é o bias associado ao neurônio n

// wnm => peso associado ao neurônio n, para entrada m, sendo n = {1,2,3} e m = {1,2,3,4}
// 	xm => entrada m = {1,2,3,4}
// 		1 -> sepal_length
// 		2 -> sepal_width
// 		3 -> petal_length
// 		4 -> petal_width

yn = função de ativação para neurônio n

E = [0,0,0]
funcão de ativação escolhida = {degrau, sigmoid}
qtde_rodar = não se sabe valor a priori, tem que acompanhar a queda do E

//definir base de teste
// a base de treino consiste em 105 plantas sendo
// 		|_ 35 Iris-setosa
// 		|_ 35 Iris-versicolor
// 		|_ 35 Iris-virginica
// 		= Isso para que o modelo não se ajuste a apenas 1 tipo de plantas

//definir base de treino
// a base de teste consiste em 45 pantas sendo:
// 	|_ 15 Iris-setosa
// 	|_ 15 Iris-versicolor
// 	|_ 15 Iris-virginica

// wnm = valores aleatórios entre -1 e 1
// bn = valores aleatórios entre -1 e 1

while(qtde_rodar > 0):
	


	/////////////////////////////////////////////////////////////////////////////////////////////


	
	//degrau
	while (percorrer todas entradas de treino 1 vez):

		// y1 = f1 ? 1 : 0
		// 	|_ f1 = w11*x1 + w12*x2 + w13*x3 + w14*x4 + bn

		// y2 = f2 ? 1 : 0
		// 	|_ f2 = w21*x1 + w22*x2 + w23*x3 + w24*x4 + bn

		// y3 = f3 ? 1 : 0
		// 	|_ f3 = w31*x1 + w32*x2 + w33*x3 + w34*x4 + bn

		// zn = dn - yn

		// wnm = wnm + a*zn*(xm)^T

		// bn = bn + a*zn

		// En = En + (zn*(zn)^T)

	// plotar epoca

	// classificar todas as 45 plantas de teste
	encontrar a quantidade de acertos

	// calcular taxa de acerto
	taxa_de_acerto = acertos/(acertos+erros)

	// wnm = valores aleatórios entre -1 e 1
	// bn = valores aleatórios entre -1 e 1
	//sigmoid
	while (percorrer todas entradas de treino 1 vez):

		y_sigmoid1 = (1)/(1+e^-f)
			|_ f1 = w11*x1 + w12*x2 + w13*x3 + w14*x4 + bn
			|_ a maior estatística precisa ser convertida em 1 e as demais devem ir para 0

		y_sigmoid2 = (1)/(1+e^-f)
			|_ f2 = w21*x1 + w22*x2 + w23*x3 + w24*x4 + bn
			|_ a maior estatística precisa ser convertida em 1 e as demais devem ir para 0

		y_sigmoid3 = (1)/(1+e^-f)
			|_ f3 = w31*x1 + w32*x2 + w33*x3 + w34*x4 + bn
			|_ a maior estatística precisa ser convertida em 1 e as demais devem ir para 0

		zn = dn - yn

		wnm = wnm + a*zn*(xm)^T

		bn = bn + a*zn

		En = En + (zn*(zn)^T)

	// plotar epoca
	
	// classificar todas as 45 plantas de teste
	encontrar a quantidade de acertos

	// calcular taxa de acerto
	taxa_de_acerto = acertos/(acertos+erros)
