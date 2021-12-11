#include "utils.h"
#include "main.cpp"

class Logic 
{
    void Game();
};

class BlackjackTestHarness : public AbstractTestHarness
{
    private:
    Logic l = Logic();

    public:
    BlackjackTestHarness()
    {
        register_test_func("Blackjack Set 1", [this]() -> void {assert_equal(1, 1);});
        register_test_func("Blackjack Set 2", [this]() -> void {assert_equal(2, 2);});
        register_test_func("Blackjack Set 3", [this]() -> void {assert_equal(3, 3);});
    }
};

class GlobalTestManager : public TestManager 
{
    public:
    GlobalTestManager() { add_test("Blackjack Tests", BlackjackTestHarness()); }
};

int main() 
{
    GlobalTestManager tr = GlobalTestManager();
    tr.execute();
}
