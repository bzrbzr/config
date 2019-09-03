{
    "shell_cmd": "gcc -std=c99 \"${file}\" -o \"${file_path}/${file_base_name}\"",
    "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
    "working_dir": "${file_path}",
    "selector": "source.c",

    "variants":
    [
        {
            "name": "Run",
            "shell_cmd": "gnome-terminal -x bash -c \"if [ -f '${file_path}/${file_base_name}' ]; then rm '${file_path}/${file_base_name}'; fi; gcc -std=c99 '${file}' -o '${file_path}'/'${file_base_name}'; '${file_path}'/'${file_base_name}'; read -p 'Process Exit, Press any key to quit...'\""
        }
    ]
}
