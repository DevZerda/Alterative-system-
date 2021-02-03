#pragma once
char *exec_r(char* cmd) {
    char exec_cmd[255];
    // if(cmd_type != "req") {
    //     sprintf(exec_cmd, "curl ");
    // }
    sprintf(exec_cmd, "%s >> output.txt", cmd);
    system(exec_cmd);

    FILE *ip_o;
    char* response = (char*)malloc(sizeof(char)*255+1); 
    ip_o = fopen("output.txt", "r");
    fread(response, 255, 1, ip_o); 
    fclose(ip_o);
    system("rm -rf output.txt");
    return response;
}
