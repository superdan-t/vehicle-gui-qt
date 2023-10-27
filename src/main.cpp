#include <iostream>

#include <QApplication>
#include <QLabel>

int main(int argc, char* argv[]) {

	std::cout << "Hello, world!\n";

	QApplication app(argc, argv);
    QLabel label("Hello, World!");
    label.show();
    return app.exec();

	return 0;
}
