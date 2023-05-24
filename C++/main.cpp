/*
 * Design Pattern - Facade 表象模式
 * 
 * 在這個範例中，SubsystemA和SubsystemB是系統中的不同功能模塊，它們分別實現了系統的不同操作。
 * Facade是表象模式的關鍵，提供了簡單的接口來統一管理子系統的操作。
 * Client是使用Facade模式的客戶端，通過簡單的接口（即Facade的Operation方法）來訪問系統中的子系統，
 * 而不需要直接訪問子系統的實現細節。透過Facade，客戶端可以方便地操作系統，同時隔離了子系統的複雜性。
 */

#include <iostream>

/*
 * SubsystemA.
*/
class SubsystemA {
public:
    void OperationA() {
        std::cout << "SubsystemA: Operation A" << std::endl;
    }
};

/*
 * SubsystemB.
*/
class SubsystemB {
public:
    void OperationB() {
        std::cout << "SubsystemB: Operation B" << std::endl;
    }
};

/*
 * Facade.
*/
class Facade {
private:
    SubsystemA subsystemA;
    SubsystemB subsystemB;

public:
    void Operation() {
        std::cout << "Facade: Operation" << std::endl;
        subsystemA.OperationA();
        subsystemB.OperationB();
    }
};

/*
 * Client.
*/
int main() {
    Facade facade;
    facade.Operation();

    return 0;
}
