void kernel_main() {
    char* video = (char*)0xb8000;

    video[0] = 'K';
    video[1] = 0x07;

    video[2] = 'E';
    video[3] = 0x07;

    video[4] = 'R';
    video[5] = 0x07;
}