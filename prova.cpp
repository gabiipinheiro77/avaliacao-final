#include <iostream>
#include <string>

int main() {

    std::string vetorNome[10];
    std::string vetorMatricula[10];
    float vetorNotas[10][4];
    float vetorMedia[10];
    std::string vetorSituacao[10];
    int totalRegistros = 0;
    int opcao = 0;

    while (opcao != 5) {
        std::cout << "--- CADASTRO DE ESTUDANTES ---" << std::endl;
        std::cout << "1 - Cadastrar aluno pelo nome" << std::endl;
        std::cout << "2 - Listar todos os estudantes" << std::endl;
        std::cout << "3 - Ver notas pela matricula do aluno" << std::endl;
        std::cout << "4 - Ver situacao do aluno" << std::endl;
        std::cout << "5 - Sair" << std::endl;
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;
        std::cin.ignore();

        if (opcao == 1) {
            if (totalRegistros < 10) {
                std::cout << "Digite o nome do aluno: ";
                std::getline(std::cin, vetorNome[totalRegistros]);

                std::cout << "Digite a matricula: ";
                std::getline(std::cin, vetorMatricula[totalRegistros]);

                int j = 0;
                while (j < 4) {
                    std::cout << "Nota " << (j + 1) << " (0 a 10): ";
                    std::cin >> vetorNotas[totalRegistros][j];
                    while (vetorNotas[totalRegistros][j] < 0.0f || vetorNotas[totalRegistros][j] > 10.0f) {
                        std::cout << "Nota invalida. Informe entre 0 e 10: ";
                        std::cin >> vetorNotas[totalRegistros][j];
                    }
                    j++;
                }

                float soma = 0.0f;
                int k = 0;
                while (k < 4) {
                    soma += vetorNotas[totalRegistros][k];
                    k++;
                }
                vetorMedia[totalRegistros] = soma / 4;

                if (vetorMedia[totalRegistros] >= 6.0f) {
                    vetorSituacao[totalRegistros] = "Aprovado";
                } else if (vetorMedia[totalRegistros] >= 4.0f) {
                    vetorSituacao[totalRegistros] = "Recuperacao";
                } else {
                    vetorSituacao[totalRegistros] = "Reprovado";
                }

                totalRegistros++;
                std::cin.ignore();
                std::cout << "Aluno cadastrado com sucesso!" << std::endl;
            } else {
                std::cout << "Erro: lotado" << std::endl;
            }

        } else if (opcao == 2) {
            std::cout << "--- LISTA DE ESTUDANTES ---" << std::endl;
            if (totalRegistros == 0) {
                std::cout << "Nenhum aluno cadastrado." << std::endl;
            } else {
                int i = 0;
                while (i < totalRegistros) {
                    std::cout << "Nome: " << vetorNome[i]
                              << "  Matricula: " << vetorMatricula[i]
                              << "  Media: " << vetorMedia[i]
                              << "  Situacao: " << vetorSituacao[i] << std::endl;
                    i++;
                }
            }

        } else if (opcao == 3) {
            std::cout << "Digite a matricula: ";
            std::string matBusca;
            std::getline(std::cin, matBusca);
            int achou = 0;
            int i = 0;
            while (i < totalRegistros) {
                if (vetorMatricula[i] == matBusca) {
                    std::cout << "Nome: " << vetorNome[i] << std::endl;
                    std::cout << "Matricula: " << vetorMatricula[i] << std::endl;
                    int j = 0;
                    while (j < 4) {
                        std::cout << "Nota " << (j + 1) << ": " << vetorNotas[i][j] << std::endl;
                        j++;
                    }
                    std::cout << "Media: " << vetorMedia[i] << std::endl;
                    achou = 1;
                }
                i++;
            }
            if (achou == 0) {
                std::cout << "Aluno nao encontrado." << std::endl;
            }

        } else if (opcao == 4) {
            std::cout << "Digite a matricula: ";
            std::string matBusca;
            std::getline(std::cin, matBusca);
            int achou = 0;
            int i = 0;
            while (i < totalRegistros) {
                if (vetorMatricula[i] == matBusca) {
                    std::cout << "Nome: " << vetorNome[i] << std::endl;
                    std::cout << "Situacao: " << vetorSituacao[i] << std::endl;
                    achou = 1;
                }
                i++;
            }
            if (achou == 0) {
                std::cout << "Aluno nao encontrado." << std::endl;
            }

        } else if (opcao == 5) {
            std::cout << "Encerrando. Ate logo!" << std::endl;

        } else {
            std::cout << "Opcao invalida." << std::endl;
        }
    }

    return 0;
}