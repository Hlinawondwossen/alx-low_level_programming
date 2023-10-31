#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content written in the file.
 *
 * Return: 1 if it succeeds, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
        int fd;
        int nletters;
        int rwr;

        if (!filename)
                return (-1);

        // Open the file with the appropriate flags and permissions
        fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

        if (fd == -1)
                return (-1);

        if (!text_content)
                text_content = "";

        // Count the number of characters in the text_content
        for (nletters = 0; text_content[nletters]; nletters++)
                ;

        // Write the content to the file
        rwr = write(fd, text_content, nletters);

        if (rwr == -1)
                return (-1);

        // Close the file descriptor
        close(fd);

        return (1);
}}
