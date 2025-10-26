class Bank {
private:
    vector<long long> balance;
    int n;

    bool validAccount(int account) {
        return account >= 1 && account <= n;
    }

public:
    Bank(vector<long long>& balance) {
        this->balance = balance;
        this->n = balance.size();
    }

    bool transfer(int account1, int account2, long long money) {
        if (!validAccount(account1) || !validAccount(account2))
            return false;
        if (balance[account1 - 1] < money)
            return false;
        balance[account1 - 1] -= money;
        balance[account2 - 1] += money;
        return true;
    }

    bool deposit(int account, long long money) {
        if (!validAccount(account))
            return false;
        balance[account - 1] += money;
        return true;
    }

    bool withdraw(int account, long long money) {
        if (!validAccount(account))
            return false;
        if (balance[account - 1] < money)
            return false;
        balance[account - 1] -= money;
        return true;
    }
};
