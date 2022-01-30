#include <iostream>
using namespace std;

void dice_init(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 6 + 1;
    }
}
void arr_dice_print(int arr[], int size) {


    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    int summ_player = 0, summ_comp = 0;

    dice_init(player_dice_1, size);
    dice_init(player_dice_2, size);
    dice_init(comp_dice_1, size);
    dice_init(comp_dice_2, size);

    arr_dice_print(player_dice_1, size);
    arr_dice_print(player_dice_2, size);
    arr_dice_print(comp_dice_1, size);
    arr_dice_print(comp_dice_2, size);

}
