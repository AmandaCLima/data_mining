# Análise de Jogadas de Futebol de Robôs - CRISP-DM (SSL)

Este projeto utiliza técnicas de mineração de dados para analisar jogadas na **Small Size League (SSL)** de futebol de robôs, com foco em identificar padrões em jogadas que resultaram em gols e aquelas que não resultaram. A metodologia adotada segue o **CRISP-DM** (Cross-Industry Standard Process for Data Mining), garantindo um processo estruturado e replicável.

---
![20160629-DSCF0217_1](https://github.com/user-attachments/assets/f4aaa3b4-af4c-470e-b8f4-fcd003d51d9e)




---

## 🔗 Dados Originais

Os dados utilizados neste projeto são provenientes da RoboCup SSL, contendo informações detalhadas de partidas:

[https://ssl.robocup.org/collected-data/](https://ssl.robocup.org/collected-data/)


---

## 📈 Objetivo

O objetivo principal é explorar e analisar as jogadas para:

- Entender quais fatores contribuem para um gol.  
- Criar modelos que possam predizer se um chute resultará em gol.  
- Gerar insights para estratégias de jogo e tomada de decisão na categoria SSL.

---

## 🛠 Metodologia (CRISP-DM)

O projeto segue as seis fases do CRISP-DM:

1. **Business Understanding**  
   - Definir o problema: identificar padrões de jogadas que resultam em gols na SSL.  
   - Estabelecer objetivos de negócio e métricas de sucesso.

2. **Data Understanding**  
   - Coleta de dados do [dataset da RoboCup SSL](https://ssl.robocup.org/collected-data/).  
   - Exploração inicial dos dados, visualizações e verificação de qualidade.

3. **Data Preparation**  
   - Limpeza e normalização dos dados.  
   - Seleção de features relevantes (posição dos robôs, posição da bola, velocidade da bola etc.).  
   - Criação de labels: `gol` vs `não gol`.

4. **Modeling**  
   - Aplicação de algoritmos de classificação (ex.: Decision Trees, Random Forest, XGBoost).  
   - Ajuste de hiperparâmetros e validação cruzada.

5. **Evaluation**  
   - Avaliação dos modelos usando métricas como acurácia, precisão, recall e F1-score.  
   - Interpretação dos resultados para identificar fatores determinantes de gols.

6. **Deployment / Insights**  
   - Criação de relatórios e visualizações para comunicar os resultados.  
   - Possível integração em sistemas de análise de desempenho esportivo de robôs.

---
