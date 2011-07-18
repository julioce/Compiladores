var
	## Declaração de variáveis
	intero : integer
	dobou_1, dobou_2, dobou_3 : double
	buleano : boolean
	estringue_inicio, estringue_fim, estringue_final : string
	xar : char
	arrei : array[2] string
end

## Declaração de funções
function soma ( dobou1 : double, dobou2 : double ) double
	## Declaração de variável local
	var
		dobou : double
	end
	
	## Código da função e retorno
	dobou = dobou1 + dobou2
	return dobou
end


begin
    ## Atribuição de variáveis por entrada do usuário
	print("Digite um valor para a variável dobou_1: ")
	read(dobou_1)

	## Atribuição por código
	intero = 1
	dobou_2 = 9.99
	buleano = True
	estringue_inicio = "Início ..."
	estringue_fim = "... Final"
	xar = '!'
	
	## Chamada de função e atribuições
	dobou_3 = soma(dobou_1, dobou_2)
	print("dobou_2 = " + dobou_2 + ".\nA soma de dobou_1 e dobou_2 = " + dobou_3 + "\n\n")

	## Teste de if com operadores lógicos
	if( intero and buleano ) do
		do ## Teste do bloco de operações
			print("Estou no If\n\n")
		end

		## If dentro de outro if
		if( dobou_1 == dobou_2 ) do 
			print("dobou_1 = " + dobou_1 + " e é dobou_2 = " + dobou_2 + ". Logo eles são iguais!\n\n") ## if concatenado strings e doubles.
			## Concatenação entre inteiro e string
			print("Mas intero passou a ser = " + intero + "...\n\n")
		else
			if( dobou_1 > dobou_2 ) do ## if entre variáveis dentro do else
				print("dobou_1 = " + dobou_1 + " e é maior que dobou_2!\n\n")
			else
				print("dobou_2 = " + dobou_2 + " e é maior que dobou_1!\n\n")
			end
		end
	else
		## Print de string
		print("Estou no Else\n\n")
	end

	## Teste de while
	while ( intero < 5 ) do
		print("Variável intero=")
		print(intero)
		print("!\n")
		intero = intero + 1
	end
	
	## Teste de for
	for ( i=0 ; i<5 ) do
		print("Variável i=")
		print(i)
		print("!\n")
		i=i+1
	end
	
	## Concatenação entre strings e char
	estringue_final = estringue_inicio + estringue_fim + xar
	print( estringue_final )

end
