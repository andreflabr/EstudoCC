#include <bits/stdc++.h>
using namespace std;
///==============================================================================================================================
// Definição das prioridades
enum class Priority {
    Alta,
    Media,
    Baixa
};
///==============================================================================================================================
// Definição dos tipos de eventos
enum class EventType {
    EntradaDeDados,
    Logica,
    ProcessamentoGrafico
};
///==============================================================================================================================
// Definição da estrutura de um evento
struct Event {
    string name;
    EventType type;
    Priority priority;
};
///==============================================================================================================================
// Função para comparar eventos com base em suas prioridades
struct EventPriorityComparator {
    bool operator()(const Event& event1, const Event& event2) const {
        if (event1.type == EventType::ProcessamentoGrafico && event2.type != EventType::ProcessamentoGrafico)
            return true;
        if (event1.type != EventType::ProcessamentoGrafico && event2.type == EventType::ProcessamentoGrafico)
            return false;

        return event1.priority > event2.priority;
    }
};
///==============================================================================================================================
// Classe da Engine de Eventos
class EventEngine {
private:
    map<EventType, priority_queue<Event, vector<Event>, EventPriorityComparator>> eventQueue;

public:
    // Função para inserir um evento na fila de execução
    void insertEvent(const string& name, EventType type, Priority priority) {
        Event event{name, type, priority};
        eventQueue[type].push(event);
    }

    // Função para remover e retornar o próximo evento da fila de execução
    Event removeEvent() {
        for (auto& pair : eventQueue) {
            if (!pair.second.empty()) {
                Event event = pair.second.top();
                pair.second.pop();
                return event;
            }
        }

        // Caso a fila esteja vazia
        return {"", EventType::EntradaDeDados, Priority::Baixa};
    }

    // Função para mostrar a fila de execução
    void showEventQueue() {
        for (const auto& pair : eventQueue) {
            cout << "Tipo de evento: ";

            switch (pair.first) {
                case EventType::EntradaDeDados:
                    cout << "Entrada de Dados";
                    break;
                case EventType::Logica:
                    cout << "Logica";
                    break;
                case EventType::ProcessamentoGrafico:
                    cout << "Processamento Grafico";
                    break;
            }

            cout << "\nEventos:\n";

            priority_queue<Event, vector<Event>, EventPriorityComparator> queueCopy = pair.second;
            while (!queueCopy.empty()) {
                Event event = queueCopy.top();
                queueCopy.pop();
                cout << "Nome: " << event.name << " | Prioridade: ";

                switch (event.priority) {
                    case Priority::Alta:
                        cout << "Alta";
                        break;
                    case Priority::Media:
                        cout << "Media";
                        break;
                    case Priority::Baixa:
                        cout << "Baixa";
                        break;
                }

                cout << endl;
            }

            cout << endl;
        }
    }
};
///==============================================================================================================================
int main() {
    EventEngine eventEngine;
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1 - Inserir na fila de execucao\n";
        cout << "2 - Remover da fila de execucao\n";
        cout << "3 - Mostrar a fila de execucao\n";
        cout << "4 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string eventName;
                int eventType;
                int eventPriority;

                cout << "Inserir na fila de execucao\n";
                cout << "Nome do evento: ";
                cin >> eventName;
                cout << "Tipo de evento (1 - Entrada de Dados, 2 - Logica, 3 - Processamento Grafico): ";
                cin >> eventType;
                cout << "Prioridade (1 - Alta, 2 - Media, 3 - Baixa): ";
                cin >> eventPriority;

                EventType eventTypeEnum;
                switch (eventType) {
                    case 1:
                        eventTypeEnum = EventType::EntradaDeDados;
                        break;
                    case 2:
                        eventTypeEnum = EventType::Logica;
                        break;
                    case 3:
                        eventTypeEnum = EventType::ProcessamentoGrafico;
                        break;
                    default:
                        eventTypeEnum = EventType::EntradaDeDados;
                        break;
                }

                Priority eventPriorityEnum;
                switch (eventPriority) {
                    case 1:
                        eventPriorityEnum = Priority::Alta;
                        break;
                    case 2:
                        eventPriorityEnum = Priority::Media;
                        break;
                    case 3:
                        eventPriorityEnum = Priority::Baixa;
                        break;
                    default:
                        eventPriorityEnum = Priority::Baixa;
                        break;
                }

                eventEngine.insertEvent(eventName, eventTypeEnum, eventPriorityEnum);
                cout << "Evento inserido com sucesso!\n";
                break;
            }
            case 2: {
                Event event = eventEngine.removeEvent();
                if (!event.name.empty())
                    cout << "Evento removido: " << event.name << endl;
                else
                    cout << "Nenhum evento na fila de execucao.\n";
                break;
            }
            case 3:
                cout << "Fila de execucao:\n";
                eventEngine.showEventQueue();
                break;
            case 4:
                cout << "Encerrando o programa.\n";
                break;
            default:
                cout << "Opcao invalida. Tente novamente.\n";
                break;
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}
/* teste valores
1
testealto
1
1
1
testemedio
2
2
1
testebaixo
3
3
3
2
3

*/
