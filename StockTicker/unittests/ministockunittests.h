#ifndef MINISTOCKUNITTESTS_H
#define MINISTOCKUNITTESTS_H

#include <QObject>

class MiniStockUnitTests : public QObject {
    Q_OBJECT
private:
    void testCSVParsing (QString ticker, double change, double price);
private slots:
    void instantiateTickerItemTest();
    void componentCSVParsingTestPositiveGrowth();
    void componentCSVParsingTestNegativeGrowth();
    void componentCSVParsingTestNoGrowth();
};


#endif // MINISTOCKUNITTESTS_H