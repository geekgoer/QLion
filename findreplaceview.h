//
// Created by LENOVO on 2023/5/12.
//

#ifndef QLION_FINDREPLACEVIEW_H
#define QLION_FINDREPLACEVIEW_H

#include <QWidget>

class MainWindow;

QT_BEGIN_NAMESPACE
namespace Ui { class FindReplaceView; }
QT_END_NAMESPACE

class FindReplaceView : public QWidget {
Q_OBJECT


public:
    explicit FindReplaceView(MainWindow *parent = nullptr);

    void setCannotSearch(bool cannotSearch);

    void findPrevious();

    void findNext();

    ~FindReplaceView() override;

    void setToolButtons(bool isEnable);

    void setNotFoundText();

    void clearNotFoundText();

    void updateCountLabel(int current, int total);
    void showCountLabel(bool isShow);

private:
    Ui::FindReplaceView *ui;
    MainWindow *mainWindow;

    void setPreviousButton(bool isEnable);
    void setNextButton(bool isEnable);


private slots:

    void onFindInitRequested(const QString &text);
    void replace();
};


#endif //QLION_FINDREPLACEVIEW_H
