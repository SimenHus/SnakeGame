#include "game.h"
#include <QPainter>
#include <QKeyEvent>

Game::Game(QWidget* parent)
    : QWidget(parent)
{
    setFixedSize(400, 400);       // Window size
    timer.setInterval(100);       // 100ms per frame
    connect(&timer, &QTimer::timeout, this, &Game::updateGame);
    timer.start();
}

void Game::paintEvent(QPaintEvent*) {
    QPainter painter(this);
    painter.setBrush(Qt::black);
    painter.drawRect(rect());

    // TODO: Draw snake, food, score, etc.
}

void Game::keyPressEvent(QKeyEvent* event) {
    // TODO: Handle arrow keys to change snake direction
    switch (event->key()) {
        case Qt::Key_Left:
            // change direction
            break;
        case Qt::Key_Right:
            break;
        case Qt::Key_Up:
            break;
        case Qt::Key_Down:
            break;
    }
}

void Game::updateGame() {
    // TODO: Move snake, check collisions, redraw
    update(); // calls paintEvent
}
