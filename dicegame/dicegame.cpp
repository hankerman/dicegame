#include <iostream>
using namespace std;



int dice_print() {

    int n = rand() % 6 + 1;

    cout << " _______" << endl;
    cout << "/______/|" << endl;
    cout << "|     | |" << endl;
    cout << "|  " << n << "  | |" << endl;
    cout << "|_____|/" << endl;
    cout << endl;
    return n;
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
    int player_dice_1[size], player_dice_2[size], comp_dice_1[size], comp_dice_2[size];
    int summ_player = 0, summ_comp = 0, step;
    
    step = rand() % 2;
    if (step == 1) {
        cout << "Игрок ходит первым" << endl;        
        system("pause");

        for (int i = 0; i < size; i++) {
            cout << "Ход игрока" << endl;
            system("pause");
            summ_player += dice_print();
            //cout << summ_player << endl;
            summ_player += dice_print();
            //cout << summ_player << endl;

            cout << "Ход компьютера" << endl;
            summ_comp += dice_print();
            //cout << summ_comp << endl;
            summ_comp += dice_print();
            //cout << summ_comp << endl;
            
        }

    }
    else {
        cout << "Компьютер ходит первым" << endl;
        
        for (int i = 0; i < size; i++) {
            cout << "Ход компьютера" << endl;
            summ_comp += dice_print();
            //cout << summ_comp << endl;
            summ_comp += dice_print();
            //cout << summ_comp << endl;

            cout << "Ход игрока" << endl;
            system("pause");
            summ_player += dice_print();
            //cout << summ_player << endl;
            summ_player += dice_print();
            //cout << summ_player << endl;
        }
        
    }

    if (summ_player > summ_comp) {
        cout << "Победил игрок" << endl;
    }
    else {
        cout << "Победил компьютер" << endl;
    }
    float sr = summ_player / (size * 2), sr2 = summ_comp / (size * 2);

    cout << "Среднее значение игрока " << sr << endl;
    cout << "Среднее значение для компьютера " << sr2 << endl;

}
