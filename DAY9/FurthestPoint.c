int furthestDistanceFromOrigin(char *moves) {
    int pos = 0;
    int blank = 0;

    for (int i = 0; moves[i] != '\0'; i++) {
        if (moves[i] == 'L') pos--;
        else if (moves[i] == 'R') pos++;
        else blank++;  // '_'
    }

    if (pos < 0) pos = -pos;  // abs

    return pos + blank;
}
