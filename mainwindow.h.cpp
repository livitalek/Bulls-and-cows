int Rand_Numbers (int NumbArr, int *ComputerArr) {
        for (int i = 0; i < NumbArr; i++) {
                ComputerArr[i] = rand() % 9 + 1;
        }
        int t = 0, k = 0;
        while (t != NumbArr - 1) {
                for (int i = t + 1; i < NumbArr; i++) {
                        if (ComputerArr[t] == ComputerArr[i]) k = 1;
                }
                t++;
        }
        if (k != 0) {
                return Rand_Numbers (NumbArr, ComputerArr);
        } else {
                return 1;
        }
}
