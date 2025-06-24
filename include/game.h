#pragma once

#include <QWidget>
#include <QTimer>

class Game : public QWidget {
    Q_OBJECT

public:
    Game(QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent* event) override;
    void keyPressEvent(QKeyEvent* event) override;

private slots:
    void updateGame();

private:
    QTimer timer;
    // TODO: Snake data, food, direction, etc.
};
