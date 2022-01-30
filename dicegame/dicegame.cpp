#include <iostream>
using namespace std;



int dice_print() {

    int n = rand() % 6 + 1, n2 = rand() % 6 + 1, summ;
   
    cout << " _______" << "\t" << " _______" << endl;
    cout << "/______/|" << "\t" << "/______/|" << endl;
    cout << "|     | |" << "\t" << "|     | |" << endl;
    cout << "|  " << n << "  | |" << "\t" << "|  " << n2 << "  | |" << endl;
    cout << "|_____|/" << "\t" << "|_____|/" << endl;
    cout << endl;
    summ = n + n2;
    return summ;
}


int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    /*Игра «кубики». Условие: имеется два игральных кубика
    со значениями от 1 до 6. Игра происходит с компьютером,
    кубики бросаются поочередно. Побеждает тот, у кого
    сумма выпавших очков по итогам пяти бросков больше.
    Предусмотрите возможность получения первого хода
    человеком или  компьютером. Кубики отображаются
    с помощью символов. В конце игры необходимо выводить среднюю сумму по броскам для обоих участников.*/

    const int size = 5;    
    int summ_player = 0, summ_comp = 0, step;
    
    step = rand() % 2;
    if (step == 1) {
        cout << "Игрок ходит первым" << endl;        
        

        for (int i = 0; i < size; i++) {
            cout << "Ход игрока" << endl;
            system("pause");

            summ_player += dice_print();            
            
            

            cout << "Ход компьютера" << endl;
            summ_comp += dice_print();            
            
            
            
        }

    }
    else {
        cout << "Компьютер ходит первым" << endl;
        
        for (int i = 0; i < size; i++) {
            cout << "Ход компьютера" << endl;
            summ_comp += dice_print();            
            
            

            cout << "Ход игрока" << endl;
            system("pause");
            summ_player += dice_print();            
            
            
        }
        
    }

    if (summ_player > summ_comp) {
        cout << "Победил игрок" << endl;
    }
    else if (summ_player == summ_comp) {
        cout << "Победила дружба" << endl;
    }
    else {
        cout << "Победил компьютер" << endl;
    }
    double sr = summ_player / (size * 2), sr2 = summ_comp / (size * 2);

    cout << "Среднее значение игрока " << sr << endl;
    cout << "Среднее значение для компьютера " << sr2 << endl;

}
