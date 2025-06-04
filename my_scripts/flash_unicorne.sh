#!/bin/bash

# Flash QMK firmware to Boardsource/Unicorne keyboard

SCRIPTS="$HOME/qmk_firmware/my_scripts/"

# Check OS
if [[ "$(uname)" == "Linux" ]]; then
    echo "Detected Linux OS"
    # Ensure keyboard is mounted
    if mount | grep -q "/mnt/"; then
        echo "Keyboard is mounted"
    else
        echo "Please mount the keyboard to /mnt/ and try again."
        exit 1
    fi
    cp "$SCRIPTS/flash_unicorne.sh" "/mnt/.../"
elif [[ "$(uname)" == "Darwin" ]]; then
    echo "Detected macOS"
    # Ensure keyboard is mounted
    if mount | grep -q "/Volumes/"; then
        echo "Keyboard is mounted"
    else
        echo "Please mount the keyboard to /Volumes/ and try again."
        exit 1
    fi
    cp "$SCRIPTS/flash_unicorne.sh" "/mnt/.../"
else
    echo "Unsupported OS: $(uname)"
    exit 1
fi
