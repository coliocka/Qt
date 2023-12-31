#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <QAction>
#include <QObject>
#include <QTimer>
class QGraphicsScene;
class QKeyEvent;
class Snake;
class Food;

class GameController : public QObject {
  Q_OBJECT
public:
  GameController(QGraphicsScene &scene, QObject *parent = 0);
  ~GameController();

  void snakeAteFood(Food *food);
  void snakeAteItself();
  QAction *getResmueAction() { return resumeAction; }
  void setResumeAction(QAction *r) { resumeAction = r; }
public slots:
  void pause();
  void resume();
  void gameOver();

protected:
  bool eventFilter(QObject *object, QEvent *event);

private:
  void handleKeyPressed(QKeyEvent *event);
  void addNewFood();
  void setResume();
  QAction *resumeAction;
  QTimer timer;
  QGraphicsScene &scene;
  Snake *snake;
  bool isPause;
};

#endif // GAMECONTROLLER_H
