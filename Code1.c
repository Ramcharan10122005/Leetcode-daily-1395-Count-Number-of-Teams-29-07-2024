int numTeams(int* rating, int s) {
        int ans = 0;
        for (int i = 1; i < s - 1; i++) {
            int largerLeft = 0, largerRight = 0, smallerLeft = 0,
                smallerRight = 0;
            int middle = rating[i];
            for (int j = 0; j <= i; j++) {
                if (rating[j] < middle)
                    smallerLeft++;
                else if (rating[j] > middle)
                    largerLeft++;
            }
            for (int j = i + 1; j < s; j++) {
                if (rating[j] < middle)
                    smallerRight++;
                else if (rating[j] > middle)
                    largerRight++;
            }
            ans += (smallerLeft * largerRight) + (largerLeft * smallerRight);
        }
        return ans;
}
