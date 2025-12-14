char before(char x) {
    if (x == 'A') {
        return 'Z';
    } else if (x >= 'B' && x <= 'Z') {
        return x - 1;
    } else {
        return '0';
    }
}