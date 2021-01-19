//
// Created by Kolby on 6/19/2021.
//


#include <QWidget>

namespace Ui {
    class StartOptions;
}

/** Dialog to ask for passreexases. Used for encryption only
 */
class StartOptions : public QWidget {
    Q_OBJECT

public:
    explicit StartOptions(QWidget *parent = nullptr);
    ~StartOptions();
    int getRows();


private:
    int rows;
    Ui::StartOptions *ui;


};
