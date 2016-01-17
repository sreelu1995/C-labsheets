/* question 22 */

 #include<stdio.h> //To understand circumflex operator ^
    main()
   {
        char line[100];
        printf("Any sentence");
        scanf("%[^\n]",line);   /* enter any sentence */
        printf("%s", line);
   }

